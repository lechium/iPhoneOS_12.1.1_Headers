/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXTextStyleFontAttributes.h>

@class NSString;

@interface SXDefaultFontAttributes : NSObject <SXTextStyleFontAttributes>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * familyName; 
@property (nonatomic,readonly) long long weight; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) unsigned long long weightLabel; 
-(unsigned long long)weightLabel;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(long long)width;
-(long long)weight;
-(NSString *)familyName;
@end

