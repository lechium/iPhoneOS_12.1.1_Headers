/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKClinicalSourceAuthorizationController, NSString, HKSource;

@interface HKClinicalAuthorizationSequenceContext : NSObject {

	HKClinicalSourceAuthorizationController* _authorizationController;
	NSString* _readUsageDescription;
	HKSource* _source;

}

@property (nonatomic,retain) HKClinicalSourceAuthorizationController * authorizationController;              //@synthesize authorizationController=_authorizationController - In the implementation block
@property (nonatomic,copy) NSString * readUsageDescription;                                                  //@synthesize readUsageDescription=_readUsageDescription - In the implementation block
@property (nonatomic,copy) HKSource * source;                                                                //@synthesize source=_source - In the implementation block
-(HKClinicalSourceAuthorizationController *)authorizationController;
-(NSString *)readUsageDescription;
-(void)setAuthorizationController:(HKClinicalSourceAuthorizationController *)arg1 ;
-(void)setReadUsageDescription:(NSString *)arg1 ;
-(void)setSource:(HKSource *)arg1 ;
-(HKSource *)source;
@end
