/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TILanguageModelOfflineLearningTask.h>

@protocol TILinguisticDataSource;
@class NSCharacterSet, NSSet;

@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask {

	NSCharacterSet* _linePaddingCharacters;
	NSSet* _forwardedMessageSeparators;
	id<TILinguisticDataSource> _dataSource;

}
+(id)dataSourceForTask;
-(id)initWithClientIdentifier:(id)arg1 oneTimeTask:(BOOL)arg2 ;
-(id)linePaddingCharacters;
-(id)forwardedMessageSeparators;
-(id)dataSource;
@end

