/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFSpeechSynthesisRecordMutating.h>

@class AFSpeechSynthesisRecord, NSString;

@interface _AFSpeechSynthesisRecordMutation : NSObject <AFSpeechSynthesisRecordMutating> {

	AFSpeechSynthesisRecord* _baseModel;
	NSString* _utterance;
	unsigned long long _beginTimestamp;
	unsigned long long _endTimestamp;
	struct {
		unsigned isDirty : 1;
		unsigned hasUtterance : 1;
		unsigned hasBeginTimestamp : 1;
		unsigned hasEndTimestamp : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEndTimestamp:(unsigned long long)arg1 ;
-(void)setUtterance:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setBeginTimestamp:(unsigned long long)arg1 ;
-(id)generate;
-(id)init;
@end

