/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CorePDF/UIPDFSelection.h>

@interface UIPDFSelection (UIPDFSelectionInternal)
- (id)initWithPage:(id)arg1 cgSelection:(struct CGPDFSelection *)arg2;
- (void)dealloc;
- (struct CGPDFSelection *)CGSelection;
- (void)extendToParagraph;
- (id)description;
@end

