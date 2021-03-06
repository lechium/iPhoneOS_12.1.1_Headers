/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUComposition.h>

@class NSMutableDictionary, NSDictionary;

@interface NUGenericComposition : NUComposition {

	NSMutableDictionary* _contents;

}

@property (nonatomic,copy) NSDictionary * contents; 
-(id)initWithCompositionSchema:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(NSDictionary *)contents;
-(void)setContents:(NSDictionary *)arg1 ;
@end

