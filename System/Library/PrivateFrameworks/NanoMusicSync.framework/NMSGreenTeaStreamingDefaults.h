/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface NMSGreenTeaStreamingDefaults : NSObject {

	NSUserDefaults* _sharedDefaults;

}
+(id)sharedInstance;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)greenTeaMusicIsMirroringStreamingSettings;
-(void)setGreenTeaMusicIsMirroringStreamingSettings:(BOOL)arg1 ;
-(BOOL)greenTeaMusicAllowCellularForStreaming;
-(void)setGreenTeaMusicAllowCellularForStreaming:(BOOL)arg1 ;
-(BOOL)greenTeaMusicAllowCellularForHighQualityStreaming;
-(void)setGreenTeaMusicAllowCellularForHighQualityStreaming:(BOOL)arg1 ;
-(id)init;
-(BOOL)_boolForKey:(id)arg1 ;
@end
