/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface HashHelper : NSObject {

	CC_SHA256state_st ctx;

}
+(id)hashHelper;
-(id)getHash;
-(id)addString:(id)arg1 ;
-(id)addData:(id)arg1 ;
-(id)addDictionary:(id)arg1 ;
-(id)addObject:(id)arg1 ;
-(id)init;
-(id)addNumber:(id)arg1 ;
-(id)addArray:(id)arg1 ;
@end
