/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVInteractionHandling.h>

@protocol SVDiscoverMoreInteractionHandling;
@class NSString;

@interface SVDiscoverMoreButtonInteractionHandler : NSObject <SVInteractionHandling> {

	id<SVDiscoverMoreInteractionHandling> _discoverMoreInteractionHandler;

}

@property (nonatomic,readonly) id<SVDiscoverMoreInteractionHandling> discoverMoreInteractionHandler;              //@synthesize discoverMoreInteractionHandler=_discoverMoreInteractionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleInteractionWithContext:(id)arg1 ;
-(id<SVDiscoverMoreInteractionHandling>)discoverMoreInteractionHandler;
-(id)initWithDiscoverMoreInteractionHandler:(id)arg1 ;
@end

