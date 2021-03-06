/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VSCacheUpdateRequest : NSObject {

	NSString* _modelID;
	NSString* _classID;

}
-(id)initWithModelIdentifier:(id)arg1 classIdentifier:(id)arg2 ;
-(id)coalescedRequest:(id)arg1 ;
-(id)classIdentifier;
-(id)modelIdentifier;
-(void)dealloc;
-(id)description;
@end

