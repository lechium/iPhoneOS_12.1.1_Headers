/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIPrintPageRenderer.h>

@interface HKCDAPDFPrintPageRenderer : UIPrintPageRenderer {

	CGRect _paperRectOverride;
	CGRect _printableRectOverride;

}
-(id)initWithPaperRect:(CGRect)arg1 horizontalMargin:(double)arg2 verticalMargin:(double)arg3 ;
-(CGRect)printableRect;
-(CGRect)paperRect;
-(void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
@end

