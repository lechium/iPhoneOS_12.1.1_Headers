/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SFPrintControllerDelegate <NSObject>
@optional
-(id)URLStringForPrintController:(id)arg1;
-(id)pageTitleForPrintController:(id)arg1;
-(id)loadingDialogPageTitleForPrintController:(id)arg1;
-(void)printController:(id)arg1 didCreatePrintInfo:(id)arg2;

@required
-(BOOL)printControllerPageIsLoading:(id)arg1;
-(BOOL)printControllerShouldPrintReader:(id)arg1;
-(BOOL)printControllerCanPresentPrintUI:(id)arg1;

@end

