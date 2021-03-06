/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNQuickPropertyAction.h>

@interface CNQuickFaceTimeAction : CNQuickPropertyAction {

	BOOL _audioOnly;

}

@property (assign,nonatomic) BOOL audioOnly;              //@synthesize audioOnly=_audioOnly - In the implementation block
+(id)defaultFaceTimeAudioTitle;
+(id)defaultFaceTimeTitle;
-(id)_coreDuetInteractionMechanisms;
-(id)_coreDuetValue;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(BOOL)audioOnly;
-(unsigned long long)score;
-(void)setAudioOnly:(BOOL)arg1 ;
-(id)identifier;
-(id)category;
@end

