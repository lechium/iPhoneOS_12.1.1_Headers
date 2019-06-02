/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@class NSString, MapsSuggestionsQueue;

@interface MapsSuggestionsSuppressor : NSObject <MapsSuggestionsObject> {

	NSMutableDictionary* _suppressionEntries;
	NSString* _suppressionEntriesFilePath;
	MapsSuggestionsQueue* _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)defaultFilePath;
-(BOOL)isSuppressedEntry:(id)arg1 ;
-(BOOL)suppressEntry:(id)arg1 forTime:(double)arg2 ;
-(BOOL)_loadSuppressedEntries;
-(BOOL)_saveSuppressedEntries;
-(BOOL)loadSuppressedEntries;
-(BOOL)saveSuppressedEntries;
-(void)_deleteSuppressedEntriesFile;
-(id)init;
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)uniqueName;
-(void)purge;
@end

