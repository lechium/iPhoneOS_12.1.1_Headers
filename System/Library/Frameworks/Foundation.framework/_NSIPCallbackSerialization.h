/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface _NSIPCallbackSerialization : NSObject {

	/*^block*/id _endBlock;
	AB _hasBegun;
	AB _hasEnded;
	NSUUID* _UUID;

}

@property (nonatomic,copy) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
-(void)sendBeginBlock:(/*^block*/id)arg1 ;
-(void)sendEndBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
@end
