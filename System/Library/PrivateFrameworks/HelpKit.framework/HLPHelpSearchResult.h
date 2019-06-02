/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HelpKit/HelpKit-Structs.h>
@class NSString;

@interface HLPHelpSearchResult : NSObject {

	long long _weight;
	long long _matchCount;
	NSString* _identifier;

}

@property (assign,nonatomic) long long weight;                   //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) long long matchCount;               //@synthesize matchCount=_matchCount - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(long long)matchCount;
-(void)setMatchCount:(long long)arg1 ;
-(NSString *)identifier;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)weight;
-(void)setWeight:(long long)arg1 ;
@end

