/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentProcessConfiguration.h>

@protocol SXWebContentProcessConfiguration <NSObject>
@property (nonatomic,readonly) BOOL shouldRunAtBackgroundPriority; 
@required
-(BOOL)shouldRunAtBackgroundPriority;

@end


@class NSString;

@interface SXWebContentProcessConfiguration : NSObject <SXWebContentProcessConfiguration> {

	BOOL _shouldRunAtBackgroundPriority;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldRunAtBackgroundPriority;              //@synthesize shouldRunAtBackgroundPriority=_shouldRunAtBackgroundPriority - In the implementation block
-(BOOL)shouldRunAtBackgroundPriority;
-(id)initWithBackgroundPriority:(BOOL)arg1 ;
@end

