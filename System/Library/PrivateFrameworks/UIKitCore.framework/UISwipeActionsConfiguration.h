/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface UISwipeActionsConfiguration : NSObject {

	BOOL _performsFirstActionWithFullSwipe;
	BOOL _autosizesButtons;
	NSArray* _actions;

}

@property (assign,setter=_setAutosizesButtons:,getter=_autosizesButtons,nonatomic) BOOL autosizesButtons;              //@synthesize autosizesButtons=_autosizesButtons - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                                                                 //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL performsFirstActionWithFullSwipe;                                                    //@synthesize performsFirstActionWithFullSwipe=_performsFirstActionWithFullSwipe - In the implementation block
+(id)configurationWithActions:(id)arg1 ;
-(id)init;
-(id)description;
-(NSArray *)actions;
-(void)setPerformsFirstActionWithFullSwipe:(BOOL)arg1 ;
-(void)_setAutosizesButtons:(BOOL)arg1 ;
-(BOOL)performsFirstActionWithFullSwipe;
-(BOOL)_autosizesButtons;
@end

