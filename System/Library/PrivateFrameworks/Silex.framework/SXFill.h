/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXClassFactoryProtocol.h>

@class NSString;

@interface SXFill : SXJSONObject <SXClassFactoryProtocol>

@property (nonatomic,readonly) unsigned long long attachment; 
@property (nonatomic,readonly) unsigned long long fillMode; 
@property (nonatomic,readonly) unsigned long long horizontalAlignment; 
@property (nonatomic,readonly) unsigned long long verticalAlignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)typeString;
+(void)initializeObject;
-(unsigned long long)verticalAlignment;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)fillMode;
-(unsigned long long)attachment;
-(unsigned long long)attachmentWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)fillModeWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)horizontalAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
@end

