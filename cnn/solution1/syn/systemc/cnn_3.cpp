#include "cnn.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cnn::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"img_in_V_dout\" :  \"" << img_in_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"img_in_V_empty_n\" :  \"" << img_in_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"img_in_V_read\" :  \"" << img_in_V_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"prediction_address0\" :  \"" << prediction_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"prediction_ce0\" :  \"" << prediction_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"prediction_we0\" :  \"" << prediction_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"prediction_d0\" :  \"" << prediction_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

