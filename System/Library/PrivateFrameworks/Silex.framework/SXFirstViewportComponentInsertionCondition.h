/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentInsertionCondition.h>

@class NSString;

@interface SXFirstViewportComponentInsertionCondition : NSObject <SXComponentInsertionCondition> {

	BOOL _allowFirstViewportException;

}

@property (assign,nonatomic) BOOL allowFirstViewportException;              //@synthesize allowFirstViewportException=_allowFirstViewportException - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validateMarker:(id)arg1 componentTraits:(unsigned long long)arg2 layoutProvider:(id)arg3 ;
-(id)initWithAllowFirstViewportException:(BOOL)arg1 ;
-(BOOL)allowFirstViewportException;
-(void)setAllowFirstViewportException:(BOOL)arg1 ;
-(id)init;
@end
