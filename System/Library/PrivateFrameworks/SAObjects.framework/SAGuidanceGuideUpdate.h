/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAGuidanceGuideSnippet, NSNumber, NSString, SAGuidanceSuggestedUtterances;

@interface SAGuidanceGuideUpdate : SABaseClientBoundCommand

@property (nonatomic,retain) SAGuidanceGuideSnippet * guideSnippet; 
@property (nonatomic,copy) NSNumber * guideTag; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,retain) SAGuidanceSuggestedUtterances * suggestedUtterances; 
+(id)guideUpdate;
+(id)guideUpdateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(SAGuidanceGuideSnippet *)guideSnippet;
-(void)setGuideSnippet:(SAGuidanceGuideSnippet *)arg1 ;
-(NSNumber *)guideTag;
-(void)setGuideTag:(NSNumber *)arg1 ;
-(SAGuidanceSuggestedUtterances *)suggestedUtterances;
-(void)setSuggestedUtterances:(SAGuidanceSuggestedUtterances *)arg1 ;
-(id)groupIdentifier;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

