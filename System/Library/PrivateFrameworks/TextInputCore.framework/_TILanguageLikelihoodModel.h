/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TILanguageLikelihoodModeling.h>

@class NSString;

@interface _TILanguageLikelihoodModel : NSObject <TILanguageLikelihoodModeling> {

	void* _languageLikelihoodModelRef;

}

@property (nonatomic,readonly) void* languageLikelihoodModelRef;              //@synthesize languageLikelihoodModelRef=_languageLikelihoodModelRef - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(id)sharedLanguageLikelihoodModel;
+(void)setSharedLanguageLikelihoodModel:(id)arg1 ;
-(void)addEvidence:(id)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(id)arg4 app:(id)arg5 language:(id)arg6 ;
-(id)rankedLanguagesForRecipient:(id)arg1 ;
-(void)priorProbabilityForLanguages:(id)arg1 recipient:(id)arg2 handler:(/*^block*/id)arg3 ;
-(double)lastOfflineAdaptationTimeForApp:(id)arg1 ;
-(unsigned long long)emojiUsageCountForApp:(id)arg1 lastEmojiCountUpdateTime:(double*)arg2 ;
-(void*)languageLikelihoodModelRef;
-(id)init;
@end

