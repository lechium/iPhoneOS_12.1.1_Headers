/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAnisetteServiceProtocol
@required
-(void)provisionAnisetteWithCompletion:(/*^block*/id)arg1;
-(void)syncAnisetteWithSIMData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)eraseAnisetteWithCompletion:(/*^block*/id)arg1;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

