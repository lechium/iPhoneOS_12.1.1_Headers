/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	double field1;
	BOOL field2;
} SCD_Struct_SK7;

typedef struct {
	double progress;
	BOOL isBouncingOffTheEdge;
} SCD_Struct_SK8;

typedef struct SKUIEditorialStyle {
	long long alignment;
	long long bodyFontWeight;
	float bodyFontSize;
	float linkSpacing;
	long long titleFontWeight;
	float titleFontSize;
	float titleSpacing;
} SKUIEditorialStyle;

typedef struct SKUILockupStyle {
	long long artworkSize;
	long long layoutStyle;
	unsigned long long visibleFields;
} SKUILockupStyle;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct __CTFrame* CTFrameRef;

typedef struct __CFAttributedString* CFAttributedStringRef;

typedef struct IKCornerRadii {
	double bottomLeft;
	double bottomRight;
	double topLeft;
	double topRight;
} IKCornerRadii;

typedef struct __CTLine* CTLineRef;

typedef struct {
	double cellHeight;
	double cellWidth;
	double interItemSpacing;
} SCD_Struct_SK16;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef struct {
	BOOL didUpdateAdditionalTabBarButtonsContainerPositionOffset;
	UIOffset oldAdditionalTabBarButtonsContainerPositionOffset;
	BOOL didUpdateAdditionalTabBarPalettePositionOffset;
	UIOffset oldAdditionalTabBarPalettePositionOffset;
} SCD_Struct_SK18;

typedef struct {
	UIEdgeInsets field1;
	double field2;
} SCD_Struct_SK19;

typedef struct {
	BOOL field1;
	UIOffset field2;
	BOOL field3;
	UIOffset field4;
} SCD_Struct_SK20;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	double field3;
} SCD_Struct_SK21;

typedef struct {
	CGSize iconSize;
	CGSize newsstandSize;
	CGSize newsstandSwooshSize;
	CGSize videoLockupIconSize;
	CGSize videoThumbnailSize;
	double horizontalPadding;
	double interItemSpacingMixed;
	double interItemSpacingNewsstand;
	double interItemSpacingVideoLockup;
} SCD_Struct_SK22;

typedef struct {
	CGSize field1;
	CGSize field2;
	CGSize field3;
	CGSize field4;
	CGSize field5;
	double field6;
	double field7;
	double field8;
	double field9;
} SCD_Struct_SK23;

typedef struct __CFString* CFStringRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
} SCD_Struct_SK25;

typedef struct CGImage* CGImageRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CGContext* CGContextRef;

typedef struct {
	long long style;
	BOOL hidden;
} SCD_Struct_SK29;

typedef struct SKUIPhysicalCircleConstants {
	double circleDensity;
	double circleLinearDamping;
	double circleMaximumDiameter;
	double circleMinimumDiameter;
	double springMaximumFrequency;
	double springMinimumFrequency;
	double springDamping;
	double translationForceMultiplier;
} SKUIPhysicalCircleConstants;

typedef struct {
	unsigned searchFieldControllerRequestSearch : 1;
	unsigned searchFieldControllerSearchBarDidChangeText : 1;
	unsigned searchFieldControllerShouldBeginEditing : 1;
} SCD_Struct_SK31;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	UIEdgeInsets contentInset;
	double bottomInsetValueAddedForScrollingTabBar;
} SCD_Struct_SK35;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

