/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ACMImageLoader : NSObject {

	NSMutableDictionary* _imagesCache;

}

@property (readonly) NSMutableDictionary * imagesCache; 
+(id)sharedInstance;
-(NSMutableDictionary *)imagesCache;
-(void)dealloc;
-(id)imageNamed:(id)arg1 ;
@end

