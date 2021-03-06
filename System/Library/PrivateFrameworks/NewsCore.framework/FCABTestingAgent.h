/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCUserInfoObserving.h>

@class FCUserInfo, NSString;

@interface FCABTestingAgent : NSObject <FCUserInfoObserving> {

	FCUserInfo* _userInfo;

}

@property (nonatomic,retain) FCUserInfo * userInfo;                 //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(BOOL)arg2 ;
-(id)initWithUserInfo:(id)arg1 ;
-(void)_updateABTestingBucketForFeldsparID:(id)arg1 ;
-(id)init;
-(FCUserInfo *)userInfo;
-(void)setUserInfo:(FCUserInfo *)arg1 ;
@end

