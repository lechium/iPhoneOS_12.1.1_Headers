/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSImage, NSString;

@interface AMSDialog : NSObject {

	NSObject*<OS_dispatch_queue> _systemDialogQueue;
	NSArray* _buttons;
	/*^block*/id _completionHandler;
	NSImage* _icon;
	NSString* _message;
	long long _selectedButtonIndex;
	long long _style;
	NSArray* _textFields;
	NSString* _title;

}

@property (nonatomic,copy) NSArray * buttons;                            //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSImage * icon;                               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long selectedButtonIndex;              //@synthesize selectedButtonIndex=_selectedButtonIndex - In the implementation block
@property (assign,nonatomic) long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSArray * textFields;                         //@synthesize textFields=_textFields - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
+(id)dialogWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 ;
+(id)dialogWithTitle:(id)arg1 message:(id)arg2 ;
-(BOOL)_currentProcessLinksUIKit;
-(void)setSelectedButtonIndex:(long long)arg1 ;
-(void)setTextFields:(NSArray *)arg1 ;
-(long long)selectedButtonIndex;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 ;
-(BOOL)_presentiOSDialogFromViewController:(id)arg1 ;
-(void)presentSystemDialog;
-(void)_presentMacDialogFromWindow:(id)arg1 ;
-(void)_finishWithButtonIndex:(long long)arg1 ;
-(id)_createWindowAndMakeVisible;
-(void)_removeKeyWindow:(id)arg1 ;
-(void)addButton:(id)arg1 ;
-(void)addTextField:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 ;
-(void)presentSheetFromWindow:(id)arg1 ;
-(BOOL)_currentProcessLinksAppKit;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSArray *)textFields;
-(NSImage *)icon;
-(void)setIcon:(NSImage *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)present;
@end

