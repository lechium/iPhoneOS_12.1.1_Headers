/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SFDialogAction : NSObject {

	long long _activatingKeyboardShortcut;
	long long _actionType;
	NSString* _title;

}

@property (nonatomic,readonly) long long activatingKeyboardShortcut;              //@synthesize activatingKeyboardShortcut=_activatingKeyboardShortcut - In the implementation block
@property (nonatomic,readonly) long long actionType;                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
+(id)actionWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3 ;
-(long long)actionType;
-(long long)activatingKeyboardShortcut;
-(id)initWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3 ;
-(NSString *)title;
@end
