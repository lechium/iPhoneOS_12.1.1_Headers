/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <BiometricKitUI/BiometricKitDelegate.h>

@protocol BiometricKitUIEnrollResultDelegate;
@class NSMutableDictionary, BiometricKit, NSString;

@interface BiometricKitUIEnrollViewController : UIViewController <BiometricKitDelegate> {

	NSMutableDictionary* _properties;
	BiometricKit* _biometricKit;
	id<BiometricKitUIEnrollResultDelegate> _delegate;

}

@property (nonatomic,retain) BiometricKit * biometricKit;                                  //@synthesize biometricKit=_biometricKit - In the implementation block
@property (assign,nonatomic) id<BiometricKitUIEnrollResultDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)restartEnroll;
-(void)setBiometricKit:(BiometricKit *)arg1 ;
-(void)cancelEnroll;
-(BiometricKit *)biometricKit;
-(void)setDelegate:(id<BiometricKitUIEnrollResultDelegate>)arg1 ;
-(id<BiometricKitUIEnrollResultDelegate>)delegate;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
@end

