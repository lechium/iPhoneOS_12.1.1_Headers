/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLModelErrorUtils : NSObject
+(id)genericErrorWithString:(id)arg1 ;
+(id)featureTypeErrorWithString:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 string:(id)arg2 ;
+(id)customLayerErrorWithUnderlyingError:(id)arg1 withString:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 string:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
+(id)errorWithCode:(long long)arg1 format:(id)arg2 args:(char*)arg3 ;
+(id)IOErrorWithString:(id)arg1 ;
@end

