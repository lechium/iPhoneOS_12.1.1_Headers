/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, UIImage;

@interface _CertInfoGradientLabel : UIView {

	NSString* _text;
	UIFont* _font;
	UIImage* _checkImage;
	CGColorRef _patternColor;

}
-(id)initWithTrusted:(BOOL)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

