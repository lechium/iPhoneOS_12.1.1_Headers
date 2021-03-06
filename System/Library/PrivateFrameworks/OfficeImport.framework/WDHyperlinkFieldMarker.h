/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDFieldMarker.h>

@class NSString;

@interface WDHyperlinkFieldMarker : WDFieldMarker {

	NSString* mLink;
	NSString* mFragment;
	unsigned mInternalLink : 1;

}

@property (nonatomic,retain) NSString * link; 
@property (nonatomic,retain) NSString * fragment; 
@property (assign,nonatomic) BOOL internalLink; 
-(BOOL)internalLink;
-(int)runType;
-(void)setInternalLink:(BOOL)arg1 ;
-(void)setFragment:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)fragment;
@end

