/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface ICQUpgradeFlowOptions : NSObject <NSCopying> {

	UIColor* _navigationBarTintColor;
	UIColor* _buttonTintColor;

}

@property (nonatomic,copy) UIColor * navigationBarTintColor;              //@synthesize navigationBarTintColor=_navigationBarTintColor - In the implementation block
@property (nonatomic,copy) UIColor * buttonTintColor;                     //@synthesize buttonTintColor=_buttonTintColor - In the implementation block
-(UIColor *)navigationBarTintColor;
-(void)setButtonTintColor:(UIColor *)arg1 ;
-(UIColor *)buttonTintColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNavigationBarTintColor:(UIColor *)arg1 ;
@end
