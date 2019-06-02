/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPrinterPickerControllerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIPrinter;

@interface UIPrinterPickerController : NSObject {

	/*^block*/id _completionHandler;
	id _state;
	UIPrinter* _selectedPrinter;
	id<UIPrinterPickerControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIPrinter * selectedPrinter;                                        //@synthesize selectedPrinter=_selectedPrinter - In the implementation block
@property (assign,nonatomic,__weak) id<UIPrinterPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<UIPrinterPickerControllerDelegate>)arg1 ;
-(id<UIPrinterPickerControllerDelegate>)delegate;
-(void)dismissAnimated:(BOOL)arg1 ;
-(id)_init;
-(void)_printerPickerDidPresent;
-(void)_printerPickerWillDismiss;
-(void)_printerPickerDidDismiss;
-(BOOL)_delegateFiltersPrinters;
-(BOOL)_shouldShowPrinter:(id)arg1 ;
-(BOOL)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)presentFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSelectedPrinter:(UIPrinter *)arg1 ;
-(BOOL)_setupPickerPanel:(/*^block*/id)arg1 ;
-(UIPrinter *)selectedPrinter;
@end

