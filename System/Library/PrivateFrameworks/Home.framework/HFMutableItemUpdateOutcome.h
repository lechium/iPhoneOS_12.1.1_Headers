/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemUpdateOutcome.h>

@class NSMutableDictionary, NSDictionary;

@interface HFMutableItemUpdateOutcome : HFItemUpdateOutcome {

	NSMutableDictionary* _mutableResults;

}

@property (nonatomic,retain) NSMutableDictionary * mutableResults;              //@synthesize mutableResults=_mutableResults - In the implementation block
@property (nonatomic,retain) NSDictionary * results; 
@property (assign,nonatomic) unsigned long long outcomeType; 
-(id)initWithResults:(id)arg1 type:(unsigned long long)arg2 ;
-(NSMutableDictionary *)mutableResults;
-(void)setMutableResults:(NSMutableDictionary *)arg1 ;
-(void)addResultsFromDictionary:(id)arg1 ;
-(void)safeSetObject:(id)arg1 forKey:(id)arg2 ;
-(void)addResultsFromOutcome:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allKeys;
-(void)removeObjectsForKeys:(id)arg1 ;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
@end

