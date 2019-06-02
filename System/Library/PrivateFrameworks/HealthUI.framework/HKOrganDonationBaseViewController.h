/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTitledBuddyViewController.h>

@class _HKMedicalIDData, NSString;

@interface HKOrganDonationBaseViewController : HKTitledBuddyViewController {

	_HKMedicalIDData* _medicalIDData;
	NSString* _completionButtonTitle;
	/*^block*/id _registrationCompletionHandler;

}

@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;              //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) NSString * completionButtonTitle;              //@synthesize completionButtonTitle=_completionButtonTitle - In the implementation block
@property (nonatomic,copy) id registrationCompletionHandler;                //@synthesize registrationCompletionHandler=_registrationCompletionHandler - In the implementation block
-(_HKMedicalIDData *)medicalIDData;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(id)registrationCompletionHandler;
-(void)setRegistrationCompletionHandler:(id)arg1 ;
-(NSString *)completionButtonTitle;
-(void)setCompletionButtonTitle:(NSString *)arg1 ;
-(id)initWithMedicalIDData:(id)arg1 ;
@end
