/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWRenderListParameterListProvider.h>

@class NSString;

@interface BWRenderListParameters : NSObject <BWRenderListParameterListProvider> {

	BWRenderListParameterList* _parameterList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BWRenderListParameterList* parameterList; 
+(void)initialize;
-(BWRenderListParameterList*)parameterList;
-(id)initWithParameterList:(BWRenderListParameterList*)arg1 ;
-(id)init;
-(void)dealloc;
-(BWRenderListParameterNode*)firstNode;
@end
