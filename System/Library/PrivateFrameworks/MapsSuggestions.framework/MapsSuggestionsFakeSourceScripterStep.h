/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapsSuggestions/MapsSuggestions-Structs.h>
@class NSArray;

@interface MapsSuggestionsFakeSourceScripterStep : NSObject {

	NSArray* _entries;
	unsigned long long _type;

}

@property (nonatomic,copy) NSArray * entries;                      //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(id)initWithEntries:(NSArray*)arg1 type:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(NSArray *)entries;
@end

