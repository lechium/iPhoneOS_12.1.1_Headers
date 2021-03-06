/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CNContactTargetActionWrapper;

@interface CNCustomCardAction : NSObject {

	BOOL _destructive;
	NSString* _title;
	CNContactTargetActionWrapper* _targetActionWrapper;
	NSString* _contactIdentifier;
	long long _placement;

}

@property (nonatomic,readonly) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) CNContactTargetActionWrapper * targetActionWrapper;              //@synthesize targetActionWrapper=_targetActionWrapper - In the implementation block
@property (nonatomic,readonly) NSString * contactIdentifier;                                    //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,readonly) long long placement;                                             //@synthesize placement=_placement - In the implementation block
@property (getter=isDestructive,nonatomic,readonly) BOOL destructive;                           //@synthesize destructive=_destructive - In the implementation block
+(long long)placementForGroup:(id)arg1 inContactContentViewController:(id)arg2 ;
+(id)groupForActionGivenPlacement:(long long)arg1 inContactContentViewController:(id)arg2 ;
-(NSString *)contactIdentifier;
-(BOOL)isValidForContact:(id)arg1 ;
-(id)initWithTitle:(id)arg1 targetActionWrapper:(id)arg2 contactIdentifier:(id)arg3 placement:(long long)arg4 isDesctructive:(BOOL)arg5 ;
-(BOOL)matchesTarget:(id)arg1 selector:(SEL)arg2 group:(id)arg3 inContactContentViewController:(id)arg4 ;
-(CNContactTargetActionWrapper *)targetActionWrapper;
-(NSString *)title;
-(long long)placement;
-(BOOL)isDestructive;
@end

