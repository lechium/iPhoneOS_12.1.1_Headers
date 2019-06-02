/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MapsSuggestionsQueue : NSObject <MapsSuggestionsObject> {

	NSString* _name;
	NSObject*<OS_dispatch_queue> _innerQueue;

}

@property (readonly) NSObject*<OS_dispatch_queue> innerQueue;              //@synthesize innerQueue=_innerQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)serialQueueWithName:(NSString*)arg1 ;
-(id)initSerialQueueWithName:(NSString*)arg1 ;
-(void)syncBlock:(/*^block*/id)arg1 ;
-(id)syncReturningBlock:(/*^block*/id)arg1 ;
-(BOOL)syncBOOLReturningBlock:(/*^block*/id)arg1 ;
-(void)asyncBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)innerQueue;
-(NSString *)uniqueName;
@end

