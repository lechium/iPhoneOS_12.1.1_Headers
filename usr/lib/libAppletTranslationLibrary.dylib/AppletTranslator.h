/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface AppletTranslator : NSObject
+(os_state_data_s*)dumpState;
+(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
+(BOOL)configureSEExpressApplets:(id)arg1 transceiver:(id)arg2 seHasActivatedApplets:(BOOL*)arg3 skipAllActivations:(BOOL)arg4 error:(id*)arg5 ;
+(void)initLibrary:(/*^block*/id)arg1 ;
+(id)getAppletStateAndHistory:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
+(BOOL)appletCacheUpdated:(id)arg1 serialNumber:(id)arg2 isdSequenceCounter:(id)arg3 transceiver:(id)arg4 error:(id*)arg5 ;
+(BOOL)setPlasticCardMode:(BOOL)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 serialNumber:(id)arg5 transceiver:(id)arg6 error:(id*)arg7 ;
+(BOOL)configureSEExpressApplets:(id)arg1 transceiver:(id)arg2 error:(id*)arg3 ;
+(id)checkSEExpressAppletCompatibility:(id)arg1 error:(id*)arg2 ;
@end

