/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface DCSettings : NSObject {

	NSUserDefaults* _userDefaults;

}

@property (retain) NSUserDefaults * userDefaults;                      //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) BOOL enableViewService; 
@property (nonatomic,readonly) BOOL finishAfterFirstScan; 
+(id)sharedSettings;
-(BOOL)enableViewService;
-(BOOL)finishAfterFirstScan;
-(id)enableViewServiceBoxed;
-(void)setEnableViewServiceBoxed:(id)arg1 ;
-(id)finishAfterFirstScanBoxed;
-(void)setFinishAfterFirstScanBoxed:(id)arg1 ;
-(id)init;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
@end

