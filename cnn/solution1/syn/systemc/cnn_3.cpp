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
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"img_in_V_V_TDATA\" :  \"" << img_in_V_V_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"img_in_V_V_TVALID\" :  \"" << img_in_V_V_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"img_in_V_V_TREADY\" :  \"" << img_in_V_V_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"prediction_V_V_TDATA\" :  \"" << prediction_V_V_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"prediction_V_V_TVALID\" :  \"" << prediction_V_V_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"prediction_V_V_TREADY\" :  \"" << prediction_V_V_TREADY.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

