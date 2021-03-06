/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFHostViewControllerDelegate <NSObject>
@optional
-(void)pdfHostViewController:(id)arg1 updateCurrentPageIndex:(long long)arg2;
-(void)pdfHostViewController:(id)arg1 updatePageCount:(long long)arg2;
-(void)pdfHostViewController:(id)arg1 documentDidUnlockWithPassword:(id)arg2;
-(void)pdfHostViewController:(id)arg1 findStringUpdate:(unsigned long long)arg2 done:(BOOL)arg3;
-(void)pdfHostViewController:(id)arg1 goToURL:(id)arg2;
-(void)pdfHostViewController:(id)arg1 goToURL:(id)arg2 atLocation:(CGPoint)arg3;
-(void)pdfHostViewController:(id)arg1 goToPageIndex:(long long)arg2;
-(void)pdfHostViewController:(id)arg1 goToPageIndex:(long long)arg2 withViewFrustum:(CGRect)arg3;
-(void)pdfHostViewController:(id)arg1 didLongPressURL:(id)arg2 atLocation:(CGPoint)arg3 withAnnotationRect:(CGRect)arg4;
-(void)pdfHostViewController:(id)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(CGPoint)arg3 withAnnotationRect:(CGRect)arg4;
-(void)pdfHostViewController:(id)arg1 didLongPressURL:(id)arg2 atLocation:(CGPoint)arg3;
-(void)pdfHostViewController:(id)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(CGPoint)arg3;
-(void)pdfHostViewControllerExtensionProcessDidCrash:(id)arg1;

@end

