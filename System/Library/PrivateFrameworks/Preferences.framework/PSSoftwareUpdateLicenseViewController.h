/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>

@class NSString, UITextView;

@interface PSSoftwareUpdateLicenseViewController : PSViewController {

	NSString* _licenseTextInfo;
	UITextView* _licenseTextView;

}

@property (nonatomic,retain) NSString * licenseTextInfo;                //@synthesize licenseTextInfo=_licenseTextInfo - In the implementation block
@property (nonatomic,retain) UITextView * licenseTextView;              //@synthesize licenseTextView=_licenseTextView - In the implementation block
-(id)initWithLicense:(id)arg1 ;
-(void)setLicenseText:(id)arg1 ;
-(NSString *)licenseTextInfo;
-(void)setLicenseTextInfo:(NSString *)arg1 ;
-(UITextView *)licenseTextView;
-(void)setLicenseTextView:(UITextView *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)didReceiveMemoryWarning;
@end
