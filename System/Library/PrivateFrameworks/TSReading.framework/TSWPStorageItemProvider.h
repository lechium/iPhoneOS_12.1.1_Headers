/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, NSString;

@interface TSWPStorageItemProvider : NSObject <NSItemProviderWriting> {

	NSString* _string;

}

@property (nonatomic,copy) NSString * string;                                                      //@synthesize string=_string - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
+(id)storageItemProviderWithString:(id)arg1 ;
+(id)writableTypeIdentifiersForItemProvider;
-(void)_loadPlainTextData:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
@end

