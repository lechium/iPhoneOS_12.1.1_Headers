/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SASportsSeason;

@interface SASportsLeague : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * diplayedText; 
@property (assign,nonatomic) BOOL displayTeamLocationOverName; 
@property (nonatomic,copy) NSString * displayedText; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) SASportsSeason * season; 
@property (nonatomic,copy) NSString * sport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)league;
+(id)leagueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)diplayedText;
-(void)setDiplayedText:(NSString *)arg1 ;
-(BOOL)displayTeamLocationOverName;
-(void)setDisplayTeamLocationOverName:(BOOL)arg1 ;
-(NSString *)displayedText;
-(void)setDisplayedText:(NSString *)arg1 ;
-(NSString *)sport;
-(void)setSport:(NSString *)arg1 ;
-(SASportsSeason *)season;
-(void)setSeason:(SASportsSeason *)arg1 ;
-(id)groupIdentifier;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
@end
