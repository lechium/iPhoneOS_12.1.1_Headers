/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIContext.h>

@interface CIBitmapContext : CIContext {

	CIBitmapContextPrivate* _bcpriv;

}
+(id)contextWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
+(id)contextWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 options:(id)arg5 ;
+(id)context;
+(id)contextWithOptions:(id)arg1 ;
-(id)initWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
-(id)initWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 options:(id)arg5 ;
-(BOOL)setBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
-(void)drawImage:(id)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
-(id)init;
-(void)dealloc;
-(CGRect)bounds;
-(id)initWithOptions:(id)arg1 ;
@end

