/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface WFBlockPage : NSObject {

	NSURL* pageTemplateURL;
	NSString* userVisibleURLString;
	NSString* formActionURLString;
	NSString* preferredLanguage;

}

@property (readonly) NSURL * pageTemplateURL; 
@property (retain) NSString * userVisibleURLString; 
@property (retain) NSString * formActionURLString; 
-(id)_css;
-(NSURL *)pageTemplateURL;
-(NSString *)userVisibleURLString;
-(void)setUserVisibleURLString:(NSString *)arg1 ;
-(id)_initWithUsername:(id)arg1 fileName:(id)arg2 ;
-(id)_fileContentWithName:(id)arg1 extension:(id)arg2 ;
-(id)_blockpage;
-(id)initNoOveridePageWithUsername:(id)arg1 ;
-(id)initWithUsername:(id)arg1 overridesAllowded:(BOOL)arg2 ;
-(NSString *)formActionURLString;
-(void)setFormActionURLString:(NSString *)arg1 ;
-(void)dealloc;
-(id)page;
@end

