/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ExpressMode : NSObject
+(id)SerializeConfigurationDataForSE:(id)arg1 fastPath:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)PerformActivations:(id)arg1 transceiver:(id)arg2 fastPath:(BOOL)arg3 seHasActivatedApplets:(BOOL*)arg4 error:(id*)arg5 ;
+(BOOL)configureSE:(id)arg1 transceiver:(id)arg2 seHasActivatedApplets:(BOOL*)arg3 skipAllActivations:(BOOL)arg4 fastPath:(BOOL)arg5 error:(id*)arg6 ;
+(id)checkAppletCompatibility:(id)arg1 fastPath:(BOOL*)arg2 error:(id*)arg3 ;
@end

