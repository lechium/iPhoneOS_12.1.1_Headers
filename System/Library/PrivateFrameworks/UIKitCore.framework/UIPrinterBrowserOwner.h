/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PKPrinter;


@protocol UIPrinterBrowserOwner <NSObject>
@property (nonatomic,retain) PKPrinter * printer; 
@optional
-(void)setUserSelectedPrinter:(BOOL)arg1;
-(BOOL)shouldShowPrinter:(id)arg1;

@required
-(void)dismissAnimated:(BOOL)arg1;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
-(void)cancelPrinting;
-(PKPrinter *)printer;
-(void)setPrinter:(id)arg1;
-(BOOL)filtersPrinters;

@end
