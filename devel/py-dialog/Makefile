# Created by: ijliao
# $FreeBSD$

PORTNAME=	dialog
PORTVERSION=	2.7
PORTREVISION=	4
CATEGORIES=	devel python
MASTER_SITES=	SF/python${PORTNAME}/python${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pythondialog-${PORTVERSION}

MAINTAINER=	mek@mek.uz.ua
COMMENT=	Python interface to dialog(3)

LICENSE=	LGPL20

DEPRECATED=	Uses deprecated version of python
EXPIRATION_DATE=	2020-08-15

RUN_DEPENDS=	cdialog:devel/cdialog

USES=		python:2.7 tar:bzip2
USE_PYTHON=	distutils
PYDISTUTILS_PKGNAME=	pythondialog

EXAMPLESDIR=	${PREFIX}/share/examples/py-dialog

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/demo.py ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
