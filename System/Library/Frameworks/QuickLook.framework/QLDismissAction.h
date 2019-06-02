/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface QLDismissAction : NSObject {

	BOOL _shouldDismissQuickLookAutomatically;
	NSString* _title;
	/*^block*/id _completionHandler;
	long long _alertStyle;

}

@property (nonatomic,copy) id completionHandler;                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long alertStyle;                                  //@synthesize alertStyle=_alertStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissQuickLookAutomatically;              //@synthesize shouldDismissQuickLookAutomatically=_shouldDismissQuickLookAutomatically - In the implementation block
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)actionWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithTitle:(id)arg1 alertStyle:(long long)arg2 shouldDismissQuickLookAutomatically:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)setAlertStyle:(long long)arg1 ;
-(BOOL)shouldDismissQuickLookAutomatically;
-(void)setShouldDismissQuickLookAutomatically:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(long long)alertStyle;
@end
