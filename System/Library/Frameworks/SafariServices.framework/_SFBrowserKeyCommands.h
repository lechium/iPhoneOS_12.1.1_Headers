/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _SFBrowserKeyCommands : NSObject
+(void)_setUpKeyCommandsIfNecessary;
+(id)_keyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 ;
+(id)_keyForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3 ;
+(long long)_modifierFlagsForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3 ;
+(id)keyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 bundle:(id)arg3 table:(id)arg4 ;
+(BOOL)_boolForSelectorString:(id)arg1 modifierString:(id)arg2 bundle:(id)arg3 table:(id)arg4 ;
+(id)browserKeyCommands;
+(id)browserKeyCommandsByAddingCommands:(id)arg1 commandsNotConflictingWithEditing:(id)arg2 ;
@end
